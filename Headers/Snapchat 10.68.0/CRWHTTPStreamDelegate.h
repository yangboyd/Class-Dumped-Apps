//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSString;

@interface CRWHTTPStreamDelegate : NSObject <NSStreamDelegate>
{
    // Error parsing type: ^{HttpProtocolHandlerCore=^^?{AtomicRefCount={atomic<int>=Ai}}^^?{ThreadChecker=}@{unique_ptr<char, base::FreeDeleter>={__compressed_pair<char *, base::FreeDeleter>=*}}i{scoped_refptr<net::WrappedIOBuffer>=^{WrappedIOBuffer}}@@@{vector<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >, std::__1::allocator<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> > > >=^{unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >}^{unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >}{__compressed_pair<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> > *, std::__1::allocator<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> > > >=^{unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >}}}^{URLRequest}{WeakPtr<net::ChunkedDataStreamUploader>={WeakReference={scoped_refptr<const base::internal::WeakReference::Flag>=^{Flag}}}Q}@{WeakPtr<net::RequestTracker>={WeakReference={scoped_refptr<const base::internal::WeakReference::Flag>=^{Flag}}}Q}}, name: _core
}

- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
-     // Error parsing type: @24@0:8^{HttpProtocolHandlerCore=^^?{AtomicRefCount={atomic<int>=Ai}}^^?{ThreadChecker=}@{unique_ptr<char, base::FreeDeleter>={__compressed_pair<char *, base::FreeDeleter>=*}}i{scoped_refptr<net::WrappedIOBuffer>=^{WrappedIOBuffer}}@@@{vector<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >, std::__1::allocator<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> > > >=^{unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >}^{unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >}{__compressed_pair<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> > *, std::__1::allocator<std::__1::unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> > > >=^{unique_ptr<net::UploadElementReader, std::__1::default_delete<net::UploadElementReader> >}}}^{URLRequest}{WeakPtr<net::ChunkedDataStreamUploader>={WeakReference={scoped_refptr<const base::internal::WeakReference::Flag>=^{Flag}}}Q}@{WeakPtr<net::RequestTracker>={WeakReference={scoped_refptr<const base::internal::WeakReference::Flag>=^{Flag}}}Q}}16, name: initWithHttpProtocolHandlerCore:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

