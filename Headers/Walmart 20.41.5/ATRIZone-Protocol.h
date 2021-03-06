//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AtriusCore/NSCopying-Protocol.h>
#import <AtriusCore/NSObject-Protocol.h>

@class ATRPoint;
@protocol ATRIGeometry, ATRIZone;

@protocol ATRIZone <NSCopying, NSObject>
@property int floor;
@property(retain) id <ATRIGeometry> geometry;
- (_Bool)isEqualToZone:(id <ATRIZone>)arg1;
- (_Bool)positionInside:(ATRPoint *)arg1;
@end

