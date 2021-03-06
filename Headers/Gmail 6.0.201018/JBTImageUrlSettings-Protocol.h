//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTImageUrlSettings_CropType, JBTImageUrlSettings_Density, NSString;
@protocol JBTImageUrlSettings_Builder;

@protocol JBTImageUrlSettings <JavaObject>
- (id <JBTImageUrlSettings_Builder>)toBuilder;
- (_Bool)shouldStripMetadata;
- (JBTImageUrlSettings_Density *)getDensity;
- (NSString *)getDefaultProtocol;
- (_Bool)isOriginalSize;
- (JBTImageUrlSettings_CropType *)getCropType;
- (_Bool)hasCrop;
- (int)getDisplayPixels;
- (int)getHeight;
- (int)getWidth;
@end

