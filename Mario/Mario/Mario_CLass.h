#ifndef MARIO_CLASS_H
#define MARIO_CLASS_H


class Mario_CLass
{
    public:
        //get height of the pyramid
        int set_pyramid_height(int heights)
        {
            height = &heights;
        }
        
        //return the value of height
        int return_height()
        {
            return* height;
        }
        
        
        
        
        
        

    protected:

    private:
        int* height;
};

#endif // MARIO_CLASS_H
