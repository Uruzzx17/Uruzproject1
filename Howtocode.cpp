//underconstruction >> FUNCTION OF HOST <<
void summarize() {
    cout << "\n===========================================" << endl;
    cout << "           DAILY BUSINESS SUMMARY          " << endl;
    cout << "===========================================" << endl;

    // 1. รายงานการใช้โต๊ะ
    checktable();
    cout << "-------------------------------------------" << endl;

    // 2. รายงานเมนูที่ขายได้
    checkfood();
    cout << "-------------------------------------------" << endl;

    // 3. สรุปรายได้รวมทั้งหมด
    cout << " >> TOTAL REVENUE TODAY : " << grandTotal << " Baht <<" << endl;
    cout << "===========================================\n" << endl;
}

void checktable() {
    cout << "\n======= TABLE USAGE SUMMARY =======" << endl;
    cout << setw(10) << "      Table No." << setw(20) << "      Times Used" << endl;
    cout << "-----------------------------------" << endl;

    int totalTable = 0;
    for (int i = 1; i <= 5; i++) {
        cout << setw(10) << i << setw(17
