//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTShareData, SPTSharePresenter;
@protocol SPTShareDestination;

@protocol SPTShareHandler <NSObject>
- (void)shareWithData:(SPTShareData *)arg1 shareDestination:(id <SPTShareDestination>)arg2 sharePresenter:(SPTSharePresenter *)arg3 completion:(void (^)(SPTShareAlertModel *))arg4;
@end

