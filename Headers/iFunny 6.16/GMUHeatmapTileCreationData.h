//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GQTPointQuadTree, NSArray;

@interface GMUHeatmapTileCreationData : NSObject
{
    GQTPointQuadTree *_quadTree;
    CDStruct_c519178c _bounds;
    unsigned long long _radius;
    unsigned long long _minimumZoomIntensity;
    unsigned long long _maximumZoomIntensity;
    NSArray *_colorMap;
    NSArray *_maxIntensities;
    NSArray *_kernel;
}

- (void).cxx_destruct;

@end

