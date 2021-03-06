//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/UjetBaseModel.h>

@class NSArray, NSNumber, NSString, UjetAgent, UjetCsatSetting, UjetDevice, UjetEndUser;

@interface UjetCommunication : UjetBaseModel
{
    NSNumber *_id;
    NSString *_status;
    NSString *_createdAt;
    NSString *_endsAt;
    UjetAgent *_agent;
    UjetEndUser *_endUser;
    UjetDevice *_device;
    UjetCsatSetting *_csatSetting;
    NSArray *_menus;
    NSString *_lang;
}

+ (Class)menusType;
+ (id)objectMapping;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) NSArray *menus; // @synthesize menus=_menus;
@property(retain, nonatomic) UjetCsatSetting *csatSetting; // @synthesize csatSetting=_csatSetting;
@property(retain, nonatomic) UjetDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) UjetEndUser *endUser; // @synthesize endUser=_endUser;
@property(retain, nonatomic) UjetAgent *agent; // @synthesize agent=_agent;
@property(retain, nonatomic) NSString *endsAt; // @synthesize endsAt=_endsAt;
@property(retain, nonatomic) NSString *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (_Bool)isFeedbackable;
- (_Bool)isRatable;
- (id)menuPath;
- (id)initWithId:(id)arg1;

@end

