//
// File generated by /home/karan/root/bin/rootcint at Wed Mar  1 03:46:24 2017

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME dImediadIpsfdIDropboxdISeniorSpringdINewGrOpticsdIGrOpticsdIROBASTmItelescope_factorydItutorialsdIHESS1_C_ACLiC_dict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "HESS1_C_ACLiC_dict.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOTShadow {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOTShadow
// END OF SHADOWS

/********************************************************
* /media/psf/Dropbox/SeniorSpring/NewGrOptics/GrOptics/ROBAST-telescope_factory/tutorials/HESS1_C_ACLiC_dict.cxx
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableHESS1_C_ACLiC_dict();

extern "C" void G__set_cpp_environmentHESS1_C_ACLiC_dict() {
  G__cpp_reset_tagtableHESS1_C_ACLiC_dict();
}
#include <new>
extern "C" int G__cpp_dllrevHESS1_C_ACLiC_dict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* Setting up global function */
static int G__HESS1_C_ACLiC_dict__0_3020(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      AddMirrors((AOpticalComponent*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__HESS1_C_ACLiC_dict__0_3021(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      AddCamera((AOpticalComponent*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__HESS1_C_ACLiC_dict__0_3022(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      AddMasts((AOpticalComponent*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__HESS1_C_ACLiC_dict__0_3023(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      RayTrace((AOpticsManager*) G__int(libp->para[0]), (TCanvas*) G__int(libp->para[1]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__HESS1_C_ACLiC_dict__0_3024(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      HESS1();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Member function Stub
*********************************************************/

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncHESS1_C_ACLiC_dict {
 public:
  G__Sizep2memfuncHESS1_C_ACLiC_dict(): p(&G__Sizep2memfuncHESS1_C_ACLiC_dict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncHESS1_C_ACLiC_dict::*p)();
};

size_t G__get_sizep2memfuncHESS1_C_ACLiC_dict()
{
  G__Sizep2memfuncHESS1_C_ACLiC_dict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceHESS1_C_ACLiC_dict() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableHESS1_C_ACLiC_dict() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("pair<UInt_t,Int_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_pairlEunsignedsPintcOintgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<std::pair<UInt_t,Int_t> >",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<pair<UInt_t,Int_t> >",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<pair<unsigned int,int> >",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TVectorT<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TVectorTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TVectorT<Double_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TVectorTlEdoublegR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTBase<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTBase<Double_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEdoublegR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<UInt_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TString>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETStringcOallocatorlETStringgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETStringcOallocatorlETStringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETStringcOallocatorlETStringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<std::bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long,const TObject**>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<Int_t,TGeoElementRN*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_maplEintcOTGeoElementRNmUcOlesslEintgRcOallocatorlEpairlEconstsPintcOTGeoElementRNmUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<int,TGeoElementRN*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_maplEintcOTGeoElementRNmUcOlesslEintgRcOallocatorlEpairlEconstsPintcOTGeoElementRNmUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<int,TGeoElementRN*,less<int> >",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_maplEintcOTGeoElementRNmUcOlesslEintgRcOallocatorlEpairlEconstsPintcOTGeoElementRNmUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<ThreadData_t*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TGeoVolumeAssembly::ThreadData_t*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_vectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixT<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTRow_const<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTRow_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTColumn_const<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTColumn_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTDiag_const<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTDiag_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTFlat_const<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTFlat_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSub_const<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTSub_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseRow_const<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRow_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseDiag_const<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiag_constlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTRow<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTRowlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTColumn<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTColumnlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTDiag<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTDiaglEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTFlat<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTFlatlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSub<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTSublEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseRow<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRowlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TMatrixTSparseDiag<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiaglEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TElementActionT<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TElementActionTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TElementPosActionT<Float_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_TElementPosActionTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<Long_t,TGeoNavigatorArray*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_maplElongcOTGeoNavigatorArraymUcOlesslElonggRcOallocatorlEpairlEconstsPlongcOTGeoNavigatorArraymUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<long,TGeoNavigatorArray*>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_maplElongcOTGeoNavigatorArraymUcOlesslElonggRcOallocatorlEpairlEconstsPlongcOTGeoNavigatorArraymUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<long,TGeoNavigatorArray*,less<long> >",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_maplElongcOTGeoNavigatorArraymUcOlesslElonggRcOallocatorlEpairlEconstsPlongcOTGeoNavigatorArraymUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<Long_t,Int_t>",117,G__get_linked_tagnum(&G__HESS1_C_ACLiC_dictLN_maplElongcOintcOlesslElonggRcOallocatorlEpairlEconstsPlongcOintgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */
extern "C" void G__cpp_setup_memvarHESS1_C_ACLiC_dict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/

/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncHESS1_C_ACLiC_dict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {
}

static void G__cpp_setup_global3() {
}

static void G__cpp_setup_global4() {
}

static void G__cpp_setup_global5() {
   G__memvar_setup((void*)(&cm),100,0,1,-1,-1,-1,1,"cm=",0,(char*)NULL);
   G__memvar_setup((void*)(&mm),100,0,1,-1,-1,-1,1,"mm=",0,(char*)NULL);
   G__memvar_setup((void*)(&um),100,0,1,-1,-1,-1,1,"um=",0,(char*)NULL);
   G__memvar_setup((void*)(&nm),100,0,1,-1,-1,-1,1,"nm=",0,(char*)NULL);
   G__memvar_setup((void*)(&m),100,0,1,-1,-1,-1,1,"m=",0,(char*)NULL);
   G__memvar_setup((void*)(&kF),100,0,1,-1,-1,-1,1,"kF=",0,(char*)NULL);
   G__memvar_setup((void*)(&kMirrorR),100,0,1,-1,-1,-1,1,"kMirrorR=",0,(char*)NULL);
   G__memvar_setup((void*)(&kMirrorD),100,0,1,-1,-1,-1,1,"kMirrorD=",0,(char*)NULL);
   G__memvar_setup((void*)(&kMirrorT),100,0,1,-1,-1,-1,1,"kMirrorT=",0,(char*)NULL);

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalHESS1_C_ACLiC_dict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
  G__cpp_setup_global3();
  G__cpp_setup_global4();
  G__cpp_setup_global5();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {
}

static void G__cpp_setup_func19() {
}

static void G__cpp_setup_func20() {
}

static void G__cpp_setup_func21() {
}

static void G__cpp_setup_func22() {
}

static void G__cpp_setup_func23() {
}

static void G__cpp_setup_func24() {
}

static void G__cpp_setup_func25() {
}

static void G__cpp_setup_func26() {
}

static void G__cpp_setup_func27() {
}

static void G__cpp_setup_func28() {
}

static void G__cpp_setup_func29() {
   G__memfunc_setup("AddMirrors", 1015, G__HESS1_C_ACLiC_dict__0_3020, 121, -1, -1, 0, 1, 1, 1, 0, "U 'AOpticalComponent' - 0 - opt", (char*) NULL
, (void*) NULL, 0);
   G__memfunc_setup("AddCamera", 850, G__HESS1_C_ACLiC_dict__0_3021, 121, -1, -1, 0, 1, 1, 1, 0, "U 'AOpticalComponent' - 0 - opt", (char*) NULL
, (void*) NULL, 0);
   G__memfunc_setup("AddMasts", 785, G__HESS1_C_ACLiC_dict__0_3022, 121, -1, -1, 0, 1, 1, 1, 0, "U 'AOpticalComponent' - 0 - opt", (char*) NULL
, (void*) NULL, 0);
   G__memfunc_setup("RayTrace", 795, G__HESS1_C_ACLiC_dict__0_3023, 121, -1, -1, 0, 2, 1, 1, 0, 
"U 'AOpticsManager' - 0 - manager U 'TCanvas' - 0 - can3D", (char*) NULL
, (void*) NULL, 0);
   G__memfunc_setup("HESS1", 356, G__HESS1_C_ACLiC_dict__0_3024, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL
, (void*) NULL, 0);

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcHESS1_C_ACLiC_dict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
  G__cpp_setup_func18();
  G__cpp_setup_func19();
  G__cpp_setup_func20();
  G__cpp_setup_func21();
  G__cpp_setup_func22();
  G__cpp_setup_func23();
  G__cpp_setup_func24();
  G__cpp_setup_func25();
  G__cpp_setup_func26();
  G__cpp_setup_func27();
  G__cpp_setup_func28();
  G__cpp_setup_func29();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTlEfloatgR = { "TMatrixT<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEdoublegR = { "TMatrixTBase<double>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEfloatgR = { "TMatrixTBase<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTColumnlEfloatgR = { "TMatrixTColumn<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTColumn_constlEfloatgR = { "TMatrixTColumn_const<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTDiaglEfloatgR = { "TMatrixTDiag<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTDiag_constlEfloatgR = { "TMatrixTDiag_const<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTFlatlEfloatgR = { "TMatrixTFlat<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTFlat_constlEfloatgR = { "TMatrixTFlat_const<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTRowlEfloatgR = { "TMatrixTRow<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTRow_constlEfloatgR = { "TMatrixTRow_const<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiaglEfloatgR = { "TMatrixTSparseDiag<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiag_constlEfloatgR = { "TMatrixTSparseDiag_const<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRowlEfloatgR = { "TMatrixTSparseRow<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRow_constlEfloatgR = { "TMatrixTSparseRow_const<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTSublEfloatgR = { "TMatrixTSub<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TMatrixTSub_constlEfloatgR = { "TMatrixTSub_const<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TVectorTlEdoublegR = { "TVectorT<double>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TVectorTlEfloatgR = { "TVectorT<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TCanvas = { "TCanvas" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_AOpticalComponent = { "AOpticalComponent" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_AOpticsManager = { "AOpticsManager" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR = { "vector<unsigned int,allocator<unsigned int> >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_pairlEunsignedsPintcOintgR = { "pair<unsigned int,int>" , 115 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR = { "vector<pair<unsigned int,int>,allocator<pair<unsigned int,int> > >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<pair<unsigned int,int>,allocator<pair<unsigned int,int> > >::iterator>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_vectorlETStringcOallocatorlETStringgRsPgR = { "vector<TString,allocator<TString> >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TString,allocator<TString> >::iterator>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR = { "iterator<bidirectional_iterator_tag,TObject*,long,const TObject**,const TObject*&>" , 115 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_maplElongcOintcOlesslElonggRcOallocatorlEpairlEconstsPlongcOintgRsPgRsPgR = { "map<long,int,less<long>,allocator<pair<const long,int> > >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_maplEintcOTGeoElementRNmUcOlesslEintgRcOallocatorlEpairlEconstsPintcOTGeoElementRNmUgRsPgRsPgR = { "map<int,TGeoElementRN*,less<int>,allocator<pair<const int,TGeoElementRN*> > >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_vectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgR = { "vector<TGeoVolumeAssembly::ThreadData_t*,allocator<TGeoVolumeAssembly::ThreadData_t*> >" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TGeoVolumeAssembly::ThreadData_t*,allocator<TGeoVolumeAssembly::ThreadData_t*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TElementActionTlEfloatgR = { "TElementActionT<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_TElementPosActionTlEfloatgR = { "TElementPosActionT<float>" , 99 , -1 };
G__linked_taginfo G__HESS1_C_ACLiC_dictLN_maplElongcOTGeoNavigatorArraymUcOlesslElonggRcOallocatorlEpairlEconstsPlongcOTGeoNavigatorArraymUgRsPgRsPgR = { "map<long,TGeoNavigatorArray*,less<long>,allocator<pair<const long,TGeoNavigatorArray*> > >" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableHESS1_C_ACLiC_dict() {
  G__HESS1_C_ACLiC_dictLN_TMatrixTlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEdoublegR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTColumnlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTColumn_constlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTDiaglEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTDiag_constlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTFlatlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTFlat_constlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTRowlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTRow_constlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiaglEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiag_constlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRowlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRow_constlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTSublEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TMatrixTSub_constlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TVectorTlEdoublegR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TVectorTlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TCanvas.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_AOpticalComponent.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_AOpticsManager.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_pairlEunsignedsPintcOintgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_vectorlETStringcOallocatorlETStringgRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_maplElongcOintcOlesslElonggRcOallocatorlEpairlEconstsPlongcOintgRsPgRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_maplEintcOTGeoElementRNmUcOlesslEintgRcOallocatorlEpairlEconstsPintcOTGeoElementRNmUgRsPgRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_vectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TElementActionTlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_TElementPosActionTlEfloatgR.tagnum = -1 ;
  G__HESS1_C_ACLiC_dictLN_maplElongcOTGeoNavigatorArraymUcOlesslElonggRcOallocatorlEpairlEconstsPlongcOTGeoNavigatorArraymUgRsPgRsPgR.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableHESS1_C_ACLiC_dict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEdoublegR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTBaselEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTColumnlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTColumn_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTDiaglEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTDiag_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTFlatlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTFlat_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTRowlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTRow_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiaglEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseDiag_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRowlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTSparseRow_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTSublEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TMatrixTSub_constlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TVectorTlEdoublegR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TVectorTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TCanvas);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_AOpticalComponent);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_AOpticsManager);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_pairlEunsignedsPintcOintgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_vectorlETStringcOallocatorlETStringgRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_maplElongcOintcOlesslElonggRcOallocatorlEpairlEconstsPlongcOintgRsPgRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_maplEintcOTGeoElementRNmUcOlesslEintgRcOallocatorlEpairlEconstsPintcOTGeoElementRNmUgRsPgRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_vectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_reverse_iteratorlEvectorlETGeoVolumeAssemblycLcLThreadData_tmUcOallocatorlETGeoVolumeAssemblycLcLThreadData_tmUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TElementActionTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_TElementPosActionTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__HESS1_C_ACLiC_dictLN_maplElongcOTGeoNavigatorArraymUcOlesslElonggRcOallocatorlEpairlEconstsPlongcOTGeoNavigatorArraymUgRsPgRsPgR);
}
extern "C" void G__cpp_setupHESS1_C_ACLiC_dict(void) {
  G__check_setup_version(30051515,"G__cpp_setupHESS1_C_ACLiC_dict()");
  G__set_cpp_environmentHESS1_C_ACLiC_dict();
  G__cpp_setup_tagtableHESS1_C_ACLiC_dict();

  G__cpp_setup_inheritanceHESS1_C_ACLiC_dict();

  G__cpp_setup_typetableHESS1_C_ACLiC_dict();

  G__cpp_setup_memvarHESS1_C_ACLiC_dict();

  G__cpp_setup_memfuncHESS1_C_ACLiC_dict();
  G__cpp_setup_globalHESS1_C_ACLiC_dict();
  G__cpp_setup_funcHESS1_C_ACLiC_dict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncHESS1_C_ACLiC_dict();
  return;
}
class G__cpp_setup_initHESS1_C_ACLiC_dict {
  public:
    G__cpp_setup_initHESS1_C_ACLiC_dict() { G__add_setup_func("HESS1_C_ACLiC_dict",(G__incsetup)(&G__cpp_setupHESS1_C_ACLiC_dict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initHESS1_C_ACLiC_dict() { G__remove_setup_func("HESS1_C_ACLiC_dict"); }
};
G__cpp_setup_initHESS1_C_ACLiC_dict G__cpp_setup_initializerHESS1_C_ACLiC_dict;

