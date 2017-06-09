#include "libraries/physac.h"
#include "libraries/defines.c"

// Structs definitions
typedef enum GameScreen { TITLE, LOADING, GAMEPLAY, END, WIN} GameScreen;

// Global variables
int framesCounter;
bool quitGame;
bool cheatAllowed;

// Menu variables
int menuSelected;
int screenWidth;
int screenHeight;

// Sounds variables
Sound selectSound;
Sound playerJump;
Sound playerKick;
Sound playerFire;
Sound playerDie;
Sound coin;
Sound leftTime;
Sound gameOver;
Sound win;
Sound winGame;
Music marioSong;

// Game variables
GameScreen currentScreen;
int currentLevel;
bool playingMusic;
int mapsCount;

// SpriteFonts variables
SpriteFont font;

// Textures variables
Texture2D background;
Texture2D marioAtlas;
Texture2D environmentAtlas;
Texture2D castleTex;

// Parallax variables
Vector2 lastParallax;
Vector2 parallax;
Vector2 cameraOffset;
Vector2 extraOffset;

// Player variables
Transform player;
int lifes;
bool isDead;
bool completed;
int collectedCoins;
int timeLeft;

float moveSpeed;
float jumpSpeed;
bool facingRight;
int playerFrame;

// Physics variables
Physics physicsSettings;

// Bullets variables
Transform bullets[MAX_BULLETS];
Vector2 lastBullets[MAX_BULLETS];
int samePosition[MAX_BULLETS];

// Level variables
Transform platforms[MAX_FLOOR];
int usedFloor;

// Enemies variables
Transform enemies[MAX_ENEMIES];
int usedEnemies;
int enemiesFrame[MAX_ENEMIES];
float enemyAngle;
int rangeDistance;
int enemyPadding;

// Coins variables
Transform coins[MAX_COINS];
bool coinCollected[MAX_COINS];
int usedCoins;
int coinFrame;

// Decoration variables
Transform decoration[MAX_DECORATION];
int usedDecoration;
int decorationType[MAX_DECORATION];

// Clouds variables
Transform clouds[MAX_CLOUDS];
int usedClouds;

// Castle variables
Transform castle;

// Flag variables
Transform flag;
Transform flagTarget;
int flagTargetPos;