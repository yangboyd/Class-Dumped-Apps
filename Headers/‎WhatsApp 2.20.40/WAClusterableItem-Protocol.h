//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACluster, WAUserJID;

@protocol WAClusterableItem <NSObject>
@property(retain, nonatomic) WACluster *cluster;
@property(readonly, nonatomic) _Bool preventGrouping;
@property(readonly, nonatomic) WAUserJID *clusterableItemUserJID;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) struct CGPoint location;
@end

