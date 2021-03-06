//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveRoomModel;
@protocol IESLiveMTAnchorInteractiveRouter, IESLiveMonitor;

@interface IESLiveMTAnchorMonitorHandler : NSObject
{
    _Bool _isAnchor;
    LiveRoomModel *_roomModel;
    id _store;
    unsigned long long _reportID;
    id <IESLiveMTAnchorInteractiveRouter> _anchorInteractive;
    id <IESLiveMonitor> _monitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveMTAnchorInteractiveRouter> anchorInteractive; // @synthesize anchorInteractive=_anchorInteractive;
@property(nonatomic) unsigned long long reportID; // @synthesize reportID=_reportID;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) id store; // @synthesize store=_store;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void)monitorConnectionFail:(id)arg1;
- (void)monitorConnectionFirstFrame:(id)arg1;
- (void)monitorEvent:(id)arg1 status:(unsigned long long)arg2 extra:(id)arg3;
- (id)getCommonParamWithExtra:(id)arg1;

@end

