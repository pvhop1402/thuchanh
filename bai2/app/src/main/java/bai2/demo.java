/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai2;

import java.util.Scanner;

/**
 *
 * @author T3D Computer
 */
public class demo {
    static Xe []dsXe;
    static int n;
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("==========Quan Ly Xe==============");
        int chon;
        do{
            System.out.print("1\tNhập danh sách xe\n");
            System.out.print("2\tIn danh sách xe\n");
            System.out.print("3\tTìm kiếm xe có trọng tải max\n");
            System.out.print("4\tXóa xe theo stt\n");
            System.out.print("5\tThoát\n");
            chon=sc.nextInt();
            switch(chon){
            case 1:
                nhapXe(); 
                break;
            case 2:
                inDSXe(); 
                break;
            }
       }while(chon!=3);
}
public static void nhapXe(){
    Scanner sc= new Scanner(System.in);
    System.out.print("Nhap so luong xe: ");
    n=sc.nextInt();
    dsXe=new Xe[n];
    for(int i=0;i<n;i++){
        Xe xe=new Xe();
        xe.nhap();
        dsXe[i]=xe;
    }
}
public static void inDSXe(){
    Xe.tieuDe();
    for(int i=0;i<dsXe.length;i++){
        dsXe[i].inDL();
    }
}
}
