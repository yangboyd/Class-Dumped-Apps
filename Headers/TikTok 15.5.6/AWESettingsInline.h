//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWESettingsInline : NSObject
{
    _Bool _stable;
    NSString *_name;
    NSString *_key;
    char *_type;
    id _defaultValue;
}

@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) _Bool stable; // @synthesize stable=_stable;
@property(nonatomic) char *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

