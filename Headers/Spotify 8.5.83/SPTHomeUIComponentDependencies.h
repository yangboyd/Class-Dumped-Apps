//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHomeUIFeatureProperties, SPTHomeUILoggerImplementation;
@protocol GLUETheme, SPTPlayer;

@interface SPTHomeUIComponentDependencies : NSObject
{
    id <GLUETheme> _theme;
    id <SPTPlayer> _player;
    SPTHomeUILoggerImplementation *_logger;
    SPTHomeUIFeatureProperties *_featureProperties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUIFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) SPTHomeUILoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (id)initWithTheme:(id)arg1 player:(id)arg2 logger:(id)arg3 featureProperties:(id)arg4;

@end

