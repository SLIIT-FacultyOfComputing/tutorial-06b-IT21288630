class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setValues(int l, int w, int h);
       // write prototypes of getters for length, width and height
       void getValues();
 
       int calcVolume();
};
