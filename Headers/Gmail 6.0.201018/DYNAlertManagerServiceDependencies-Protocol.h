//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol DYNExperimentsService, GIPAccountID, HUBLinkRouterService;

@protocol DYNAlertManagerServiceDependencies <NSObject>
@property(readonly, nonatomic) GOOProvider *linkRouterServiceProvider;
@property(readonly, nonatomic) GOOProvider *experimentsServiceProvider;
@property(readonly, nonatomic) id <HUBLinkRouterService> linkRouterService;
@property(readonly, nonatomic) id <DYNExperimentsService> experimentsService;
@property(readonly, nonatomic) id <GIPAccountID> accountID;
@end

