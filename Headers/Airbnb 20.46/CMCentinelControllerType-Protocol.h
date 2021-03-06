//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardinalMobile/NSObject-Protocol.h>

@class CCACReq, NSString, NSURL;
@protocol CMCentinelInitResponse, CardinalSessionConfigType;

@protocol CMCentinelControllerType <NSObject>
+ (id)centinelControllerWithConfig:(id <CardinalSessionConfigType>)arg1;
- (void)centinelStepUpRequestWithJWT:(NSString *)arg1 stepUpResponse:(CCACReq *)arg2 consumerSessionId:(NSString *)arg3 transactionId:(NSString *)arg4 baseURL:(NSURL *)arg5 completion:(void (^)(CMStepUpCentinelResponse *, CMError *))arg6;
- (void)centinelSubmitLassoData:(struct NSDictionary *)arg1 withInitResponse:(id <CMCentinelInitResponse>)arg2 completion:(void (^)(CMError *))arg3;
- (void)centinelInitWithJWT:(NSString *)arg1 consumerSessionId:(NSString *)arg2 baseURL:(NSURL *)arg3 completion:(void (^)(id <CMCentinelInitResponse>, CMError *))arg4;
@end

