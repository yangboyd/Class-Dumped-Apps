//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, ORCH2FallbackToO1WidgetAction, ORCH2FinishAction, ORCH2SubmitRequest;

@protocol GWA2FlowController <NSObject>
- (void)uploadDocumentWithURL:(NSString *)arg1 parameters:(NSDictionary *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)fallbackToO1WidgetWithAction:(ORCH2FallbackToO1WidgetAction *)arg1;
- (void)finishWithAction:(ORCH2FinishAction *)arg1;
- (void)requestAddressSuggestionsWithInput:(NSString *)arg1 suggestionFieldID:(unsigned long long)arg2 countryCode:(NSString *)arg3 languageCode:(NSString *)arg4 completionHandler:(void (^)(NSArray *))arg5;
- (void)sendReauthRequestData:(NSData *)arg1 endpoint:(NSString *)arg2 responseClass:(Class)arg3 handler:(void (^)(GPBMessage *, NSError *))arg4;
- (void)submitWithRequest:(ORCH2SubmitRequest *)arg1 completion:(void (^)(GWA2Result *))arg2;
@end

