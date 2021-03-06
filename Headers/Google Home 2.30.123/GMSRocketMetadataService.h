//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IVMetadataService-Protocol.h"

@class NSCache, NSMutableDictionary, NSString;
@protocol IVMetadataService, IVMetrics;

@interface GMSRocketMetadataService : NSObject <IVMetadataService>
{
    id <IVMetadataService> _metadataService;
    NSCache *_panoCache;
    NSMutableDictionary *_requests;
}

- (void).cxx_destruct;
-     // Error parsing type: @24@0:8r^{PhotoId=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=Q}}i}16, name: keyFromPhotoId:
- (id)keyFromLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 source:(int)arg4;
- (id)panoCache;
- (void)searchPhotoByLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 source:(int)arg4 metrics:(id)arg5 userInfo:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
-     // Error parsing type: v108@0:8{PhotoId=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=Q}}i}16d56d64d72i80@84@92@?100, name: searchPhoto:latitude:longitude:radius:source:metrics:userInfo:withCompletion:
-     // Error parsing type: v72@0:8{PhotoId=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=Q}}i}16@56@?64, name: preparePhoto:metrics:withCompletion:
-     // Error parsing type: v80@0:8@16{PhotoId=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=Q}}i}24@?64@?72, name: wrapRequestForKey:photo:completion:action:
@property(nonatomic) __weak id <IVMetrics> metricsDelegate;
- (void)clearCache;
- (id)initWithMetadataService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

