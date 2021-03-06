//------------------------------------------------------------------------
// Project     : VST SDK
// Version     : 3.5.2
//
// Category    : Helpers
// Filename    : public.sdk/source/vst/auwrapper/aucocoaview.h
// Created by  : Steinberg, 12/2007
// Description : VST 3 -> AU Wrapper
//
//-----------------------------------------------------------------------------
// LICENSE
// (c) 2012, Steinberg Media Technologies GmbH, All Rights Reserved
//-----------------------------------------------------------------------------
// This Software Development Kit may not be distributed in parts or its entirety  
// without prior written agreement by Steinberg Media Technologies GmbH. 
// This SDK must not be used to re-engineer or manipulate any technology used  
// in any Steinberg or Third-party application or software module, 
// unless permitted by law.
// Neither the name of the Steinberg Media Technologies nor the names of its
// contributors may be used to endorse or promote products derived from this 
// software without specific prior written permission.
// 
// THIS SDK IS PROVIDED BY STEINBERG MEDIA TECHNOLOGIES GMBH "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL STEINBERG MEDIA TECHNOLOGIES GMBH BE LIABLE FOR ANY DIRECT, 
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.
//----------------------------------------------------------------------------------

/// \cond ignore

#ifndef __aucocoaview__
#define __aucocoaview__

#import <Cocoa/Cocoa.h>
#import <AudioUnit/AUCocoaUIView.h>

#define DYNAMIC_AUWRAPPER_CLASS_CREATION	(MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_5)

#if DYNAMIC_AUWRAPPER_CLASS_CREATION
extern NSString* AUViewFactoryClassName;

#else

// Change the SMTGCocoa_AUViewFactory whenever something in the implementation changes
#define SMTGCocoa_AUViewFactory		SMTGCocoa_AUViewFactory_Version_2

@interface SMTGCocoa_AUViewFactory : NSObject <AUCocoaUIBase> {
}

@end
#endif

/// \endcond

#endif	// __aucocoaview__
