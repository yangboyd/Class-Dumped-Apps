//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWENewPublishSyncCellModel : NSObject
{
    _Bool _switchState;
    _Bool _disabled;
    NSString *_iconStrFor24;
    NSString *_iconStrFor40;
    NSString *_appName;
    NSString *_detailText;
    NSString *_detailIText;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *detailIText; // @synthesize detailIText=_detailIText;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool switchState; // @synthesize switchState=_switchState;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *iconStrFor40; // @synthesize iconStrFor40=_iconStrFor40;
@property(copy, nonatomic) NSString *iconStrFor24; // @synthesize iconStrFor24=_iconStrFor24;
- (void).cxx_destruct;
- (_Bool)isSync;

@end

