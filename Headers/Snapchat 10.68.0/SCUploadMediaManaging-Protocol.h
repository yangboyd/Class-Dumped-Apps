//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMediaPackageHandle;
@protocol SCPerforming;

@protocol SCUploadMediaManaging <NSObject>
- (void)cancel:(NSString *)arg1;
- (void)uploadMediaPackage:(SCMediaPackageHandle *)arg1 uploadTaskId:(NSString *)arg2 key:(NSString *)arg3 iv:(NSString *)arg4 callbackPerformer:(id <SCPerforming>)arg5 successHandler:(void (^)(SCDataUploadSuccessResult *))arg6 failureHandler:(void (^)(NSHTTPURLResponse *, NSError *))arg7;
@end

