//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GBTSwipeActionsOption : NSObject
{
    NSString *_name;
    unsigned long long _tag;
    NSString *_remarks;
    unsigned long long _previewActionType;
}

+ (id)optionWithName:(id)arg1 tag:(unsigned long long)arg2 remarks:(id)arg3 previewActionType:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long previewActionType; // @synthesize previewActionType=_previewActionType;
@property(retain, nonatomic) NSString *remarks; // @synthesize remarks=_remarks;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

