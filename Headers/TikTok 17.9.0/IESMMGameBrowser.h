//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCNearbyServiceBrowserDelegate-Protocol.h"

@class IESMMNetworkGamePlayer, MCNearbyServiceBrowser, NSArray, NSMutableArray, NSString;
@protocol IESMMGameBrowserDelegate;

@interface IESMMGameBrowser : NSObject <MCNearbyServiceBrowserDelegate>
{
    id <IESMMGameBrowserDelegate> _delegate;
    MCNearbyServiceBrowser *_serviceBrowser;
    IESMMNetworkGamePlayer *_myself;
    NSMutableArray *_currentMutableGameList;
}

@property(readonly, nonatomic) NSMutableArray *currentMutableGameList; // @synthesize currentMutableGameList=_currentMutableGameList;
@property(retain, nonatomic) IESMMNetworkGamePlayer *myself; // @synthesize myself=_myself;
@property(retain, nonatomic) MCNearbyServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(nonatomic) __weak id <IESMMGameBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)refresh;
@property(readonly, nonatomic) NSArray *currentGameList;
- (id)join:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithMySelf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

