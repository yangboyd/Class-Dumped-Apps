//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMCObject.h"

@class CMCSceneController;

@interface CMCScene : CMCObject
{
    CMCScene *_parentScene;
    CMCSceneController *_controller;
}

+ (id)makeWithParentScene:(id)arg1;
+ (id)make;
+ (Class)controllerClass;
+ (id)profile;
+ (id)challenge;
+ (id)feed;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMCSceneController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak CMCScene *parentScene; // @synthesize parentScene=_parentScene;
- (id)rootScene;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end

