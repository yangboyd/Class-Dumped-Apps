//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGGLKTexture2D.h>

@class NSArray;

@interface IGGLKPlanarTexture2D : IGGLKTexture2D
{
    NSArray *_planeTextures;
}

- (void).cxx_destruct;
- (id)textureForPlaneAtIndex:(unsigned long long)arg1;
- (unsigned long long)planeCount;
- (id)initWithPlaneTextures:(id)arg1 size:(struct CGSize)arg2;

@end

