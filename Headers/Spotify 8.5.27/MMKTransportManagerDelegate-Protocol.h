//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MMKTransportManager;
@protocol MMKConnection;

@protocol MMKTransportManagerDelegate
- (void)transportManager:(MMKTransportManager *)arg1 didDisconnectFromConnection:(id <MMKConnection>)arg2;
- (void)transportManager:(MMKTransportManager *)arg1 didCreateConnection:(id <MMKConnection>)arg2;
@end

