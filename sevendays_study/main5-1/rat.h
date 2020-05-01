#ifndef _RAT_H_
#define _RAT_H_

class CRat{
public:
    //  コンストラクタ
    CRat();
    //  デストラクタ
    ~CRat();
    //  ネズミの数の出力
    static void showNum(); //静的メンバ関数
    //  ネズミが鳴く
    void squeak();
private:
    //  ネズミの番号
    int m_id;
    //  ネズミの数
    static int m_count; //静的メンバ変数
};

#endif /* _RAT_H_ */
