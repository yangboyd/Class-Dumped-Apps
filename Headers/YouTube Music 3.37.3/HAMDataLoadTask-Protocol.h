//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURLRequest, NSURLResponse;
@protocol HAMDataLoadTaskDelegate;

@protocol HAMDataLoadTask <NSObject>
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(retain, nonatomic) id <HAMDataLoadTaskDelegate> delegate;
@property(readonly, nonatomic) NSURLResponse *response;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) double startTime;
- (void)cancel;
- (void)start;
@end

