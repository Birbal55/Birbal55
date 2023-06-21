//UNION----->
//	size of union is largest member size
//common size for all
union Sample
{
	int iv;
	char cv;
	double dv;
};
main()
{
	union Sample s;//size
	  /*
	    s=8byte
	     -------
	     11.11
	     -------
	     */
	s.iv=100;
	printf("\niv=%d",s.iv);
	s.cv='A';
	printf("\ncv=%c",s.cv);
	s.dv=11.11;
	printf("\ndv=%lf",s.dv);     
}
