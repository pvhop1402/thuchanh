/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai2;

import java.util.Scanner;
import java.util.logging.Logger;

/**
 *
 * @author T3D Computer
 */
public class Xe implements MayMoc {
    private String tenXe;
    private String tenKH;
    private String NL;
    private DoanhNghiep DN = new DoanhNghiep();
    private int trongTai;
    private int tienDatCoc;
    private int namSX;

    public Xe() {
    }

    public Xe(String tenXe, String tenKH, String NL, int trongTai, 
            int tienDatCoc, int namSX) {
        this.tenXe = tenXe;
        this.tenKH = tenKH;
        this.NL = NL;
        this.trongTai = trongTai;
        this.tienDatCoc = tienDatCoc;
        this.namSX = namSX;
    }
    

    public void setNhienLieu(String NL){
        this.NL=NL;
    }
    public void setNamSX(int namSX){
        if(namSX>0)
            this.namSX=namSX;
        else
            this.namSX=2016;
    }
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap ten xe:");
        tenXe=sc.nextLine();
        System.out.print("Nhap ten khach hang: ");
        tenKH=sc.nextLine();
        System.out.print("Nhap nhien lieu cua xe: ");
        setNhienLieu(sc.nextLine());
        System.out.print("Nhap doanh nghiep: ");
        DN.nhap();
        System.out.print("Nhap trong tai: ");
        trongTai=sc.nextInt();
        System.out.print("Nhap tien dat coc: ");
        tienDatCoc=sc.nextInt();
        System.out.print("Nhap nam san xuat: ");
        setNamSX(sc.nextInt());
        sc.nextLine();
    }
    public static void tieuDe(){
        System.out.printf("%10s %10s %10s %25s %10s %10s %10s%n",
                            " ten xe", "ten kh"," nhien lieu",
                            " Doanh nghiep"," tai trọng","tien DC",
                            " Nam sx");
    }
    public void inDL(){
        //System.out.printf("%10s %10s %10s %25s %10.1d %10.1d %10d %n",
                            //tenXe,tenKH,NL,DN,trongTai,
                            //tienDatCoc,namSX);
        System.out.println("Ten Xe: "+ tenXe);
        System.out.println("Ten khach hang: "+tenKH);
        System.out.println("Nhien lieu: "+NL);
        System.out.println(DN.toString());
        System.out.println("Trong tai: "+trongTai);
        System.out.println("Tien dat coc: "+tienDatCoc);
        System.out.println("Nam san xuat: "+namSX);
        
}

    public Xe(int trongTai) {
        this.trongTai = trongTai;
    }
    
}
