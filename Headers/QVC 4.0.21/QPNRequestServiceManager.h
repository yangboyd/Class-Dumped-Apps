//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface QPNRequestServiceManager : NSObject
{
    NSURLSession *_personalizationSession;
}

- (void).cxx_destruct;
- (id)errorFromServiceResponse:(id)arg1 data:(id)arg2;
- (id)requestUrlForParameters:(id)arg1;
- (void)fetchAttributes:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)sendAttributes:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)associateQVCIdsWithParam:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)fetchQVCIdPart1WithCompletionBlock:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)fetchWithParams:(id)arg1 shouldRetry:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)fetchData:(id)arg1 httpMethodType:(id)arg2 httpHeaders:(id)arg3 body:(id)arg4 options:(long long)arg5 completion:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (id)personalizationSession;

@end

