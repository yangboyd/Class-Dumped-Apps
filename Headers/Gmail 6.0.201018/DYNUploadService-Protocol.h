//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DYNUploadTask;
@protocol DYNScottyUrlFactory, DYNUploadEventLogger;

@protocol DYNUploadService <NSObject>
@property(retain, nonatomic) id <DYNUploadEventLogger> uploadEventLogger;
@property(retain, nonatomic) id <DYNScottyUrlFactory> urlFactory;
- (void)uploadTask:(DYNUploadTask *)arg1 withCallback:(void (^)(DYNUploadTask *))arg2;
@end

