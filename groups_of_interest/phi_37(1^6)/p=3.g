# choose p
p := 3;

F := FreeGroup("s1","s2","s3","s4","s5","s6");;
s := GeneratorsOfGroup(F);
s1 := s[1]; s2 := s[2]; s3 := s[3]; s4 := s[4]; s5 := s[5]; s6 := s[6];

rels := [];

# nontrivial commutator relations: [s_i, s1] = s_{i+1} for i=2,3,4,5
Add(rels, Comm(s2,s1)*s3^-1);
Add(rels, Comm(s3,s1)*s4^-1);
Add(rels, Comm(s4,s1)*s5^-1);
Add(rels, Comm(s5,s1)*s6^-1);

Add(rels, Comm(s3,s4)*s6^-1);
Add(rels, Comm(s4,s2)*s6^-1);
Add(rels, Comm(s5,s2)*s6^-1);

# trivial commutator relations: (should be [6 choose 2]-7 = 8)
Add(rels, Comm(s6,s1));
Add(rels, Comm(s6,s2));
Add(rels, Comm(s6,s3));
Add(rels, Comm(s6,s4));
Add(rels, Comm(s6,s5));

Add(rels, Comm(s5,s3));
Add(rels, Comm(s5,s4));

Add(rels, Comm(s3,s2));

# order of s1 is p
Add(rels, s1^p);

# other generator orders
Add(rels, s2^p*s4); 
Add(rels, s3^p*s5); 
Add(rels, s4^p*s6); 
Add(rels, s5^p);
Add(rels, s6^p);

G := F / NormalClosure(F, rels);

# inspect
Print(Size(G), "\n"); # 243
Print(StructureDescription(G), "\n"); # (C3 . ((C3 x C3) : C3) = (C3 x C3) . (C3 x C3)) : C3
Print(IdSmallGroup(G), "\n"); # [ 243, 25 ]