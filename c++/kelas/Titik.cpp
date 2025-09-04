class Titik {
    private:
        int x; // Koordinat x
        int y; // Koordinat y
    
    public:
        // Konstruktor default
        Titik() {
            x = 0;
            y = 0;
        }
    
        // Konstruktor dengan parameter
        Titik(int xp, int yp) {
            x = xp;
            y = yp;
        }
    
        // Setter untuk koordinat X
        void setX(int xp) {
            x = xp;
        }
    
        // Setter untuk koordinat Y
        void setY(int yp) {
            y = yp;
        }
    
        // Getter untuk koordinat X
        int getX() {
            return x;
        }
    
        // Getter untuk koordinat Y
        int getY() {
            return y;
        }
    
        // Destruktor
        ~Titik() {
            // Destruktor tidak melakukan apa-apa dalam contoh ini
        }
    };
    