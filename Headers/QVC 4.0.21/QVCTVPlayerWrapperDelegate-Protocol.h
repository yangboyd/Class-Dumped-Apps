//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol QVCTVPlayerWrapperProtocol;

@protocol QVCTVPlayerWrapperDelegate <NSObject>

@optional
- (void)qvcPlayerDidExitFullScreen:(id <QVCTVPlayerWrapperProtocol>)arg1;
- (void)qvcPlayerWillExitFullScreen:(id <QVCTVPlayerWrapperProtocol>)arg1;
- (void)qvcPlayerDidEnterFullScreen:(id <QVCTVPlayerWrapperProtocol>)arg1;
- (void)qvcPlayerWillEnterFullScreen:(id <QVCTVPlayerWrapperProtocol>)arg1;
- (void)qvcPlayer:(id <QVCTVPlayerWrapperProtocol>)arg1 didFinishWithReason:(long long)arg2;
- (void)qvcPlayer:(id <QVCTVPlayerWrapperProtocol>)arg1 playbackStateDidChange:(long long)arg2;
- (void)qvcPlayer:(id <QVCTVPlayerWrapperProtocol>)arg1 loadStateDidChange:(long long)arg2;
- (void)qvcPlayer:(id <QVCTVPlayerWrapperProtocol>)arg1 scalingModeDidChange:(long long)arg2;
@end

