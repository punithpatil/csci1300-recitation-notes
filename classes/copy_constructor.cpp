#include <iostream>

class Pokemon{
    private:
        int _hp;
    public:
        Pokemon(){
            _hp = 10;
        }
        void setHP(int hp){
            _hp = hp;
        }
        int getHP(){
            return _hp;
        }
};

class Player{
    private:
        Pokemon my_pokemon;
    public:
        Pokemon getPokemon(){
            return my_pokemon;
        }
        void setPokemon(Pokemon in_pokemon){
            my_pokemon = in_pokemon;
        }
};

int main(){
    Player my_player;
    //For battle we will need the pokemon. One approach is to get the pokemon to use in battle
    Pokemon placeholder = my_player.getPokemon();
    // Do the battle
    placeholder.setHP(5);
    //Is the pokemon in the player updated?
    Pokemon another_placeholder = my_player.getPokemon();
    std::cout<<another_placeholder.getHP()<<std::endl;
    
    //One way to fix it, is to put the pokemon object back, or setPokemon
    my_player.setPokemon(placeholder);
    
    //Now when we get and print, it should be 5
    Pokemon changed_pokemon = my_player.getPokemon();
    std::cout<<changed_pokemon.getHP()<<std::endl;
    
    return 0;
}
