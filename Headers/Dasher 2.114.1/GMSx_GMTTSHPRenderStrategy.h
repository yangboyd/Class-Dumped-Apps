//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@interface GMSx_GMTTSHPRenderStrategy : GMSx_GPBMessage
{
}

+ (id)descriptor;
+ (id)gms_FIFEGuessableVideoStrategy;
+ (id)gms_FIFEGuessablePhotoStrategy;
+ (id)gms_FIFEGuessablePanoStrategy;
+ (id)gms_FIFEPanoStrategy;
+ (id)gms_alleycatPanoStrategy;
+ (id)gms_strategyWithFrontend:(int)arg1 imageFormat:(int)arg2 tiled:(_Bool)arg3;

// Remaining properties
@property(nonatomic) int frontend; // @dynamic frontend;
@property(nonatomic) _Bool hasFrontend; // @dynamic hasFrontend;
@property(nonatomic) _Bool hasImageFormat; // @dynamic hasImageFormat;
@property(nonatomic) _Bool hasTiled; // @dynamic hasTiled;
@property(nonatomic) int imageFormat; // @dynamic imageFormat;
@property(nonatomic) _Bool tiled; // @dynamic tiled;

@end

