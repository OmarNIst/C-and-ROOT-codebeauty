void tut1()
{
    TH1F *hist = new TH1F("hist","Histogram",100,0,100);

    TCanvas *c1 = new TCanvas();
    hist->Draw();
}

