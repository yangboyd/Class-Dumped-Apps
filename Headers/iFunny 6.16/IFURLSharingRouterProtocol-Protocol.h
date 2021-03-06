//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IFUploadingContentResult, NSError, NSString;

@protocol IFURLSharingRouterProtocol <NSObject>
- (void)showAlertWithErrorText:(NSString *)arg1;
- (void)showAlertWithError:(NSError *)arg1;
- (void)openUploadContentWithUrl:(NSString *)arg1 uploadContentType:(unsigned long long)arg2;
- (void)openPublishScreen:(IFUploadingContentResult *)arg1 onlyForSubscriber:(_Bool)arg2;
- (void)closeWithCompletion:(void (^)(void))arg1;
@end

