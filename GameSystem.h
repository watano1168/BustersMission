#pragma once

#include <vector>
#include <list>

#include "gclass.h"

class COMMON_DATA;
class KEY_INFO;

//---------------------------------------------------------------------------
//弾オブジェクト：弾のマネージャークラス
//---------------------------------------------------------------------------
class GAME_SYSTEM: public BASE_GAMESC {

public:
	//■■■メンバ変数■■■
	int GameTimer;
	int LeaveEnemy;
	int Score;
	int Stage;
	bool isPlayerLeave;

	int Pose;

	//■■■メンバ関数■■■
	void Initialize();
	void Finalize();
	void Update();		//更新処理
	void Draw();		//描画処理
	GAME_SYSTEM(GAME *gamemgr, COMMON_DATA *common, int stage);	//コンストラクタ


};
