//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface SCXSpriteCluster : NSObject
{
    _Bool _renderInFront;
    _Bool _ignoredInDirectRenderPOICollisions;
    NSOrderedSet *_sprites;
    struct CLLocationCoordinate2D _center;
}

@property(readonly, nonatomic) _Bool ignoredInDirectRenderPOICollisions; // @synthesize ignoredInDirectRenderPOICollisions=_ignoredInDirectRenderPOICollisions;
@property(readonly, nonatomic) _Bool renderInFront; // @synthesize renderInFront=_renderInFront;
@property(readonly, nonatomic) struct CLLocationCoordinate2D center; // @synthesize center=_center;
@property(readonly, nonatomic) NSOrderedSet *sprites; // @synthesize sprites=_sprites;
- (void).cxx_destruct;
- (id)initWithSprites:(id)arg1 center:(struct CLLocationCoordinate2D)arg2 renderInFront:(_Bool)arg3 ignoredInDirectRenderPOICollisions:(_Bool)arg4;
- (void)writeToSprites:(id)arg1;

@end

