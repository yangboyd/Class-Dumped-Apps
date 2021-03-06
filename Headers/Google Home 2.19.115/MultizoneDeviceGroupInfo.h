//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface MultizoneDeviceGroupInfo : NSObject <NSCopying>
{
    _Bool _defaultCastTarget;
    _Bool _isMultichannelGroup;
    NSString *_UUID;
    NSString *_leader;
    NSString *_name;
    NSNumber *_multichannelSelection;
    NSNumber *_multichannelStereoBalance;
}

@property(retain, nonatomic) NSNumber *multichannelStereoBalance; // @synthesize multichannelStereoBalance=_multichannelStereoBalance;
@property(copy, nonatomic) NSNumber *multichannelSelection; // @synthesize multichannelSelection=_multichannelSelection;
@property(nonatomic) _Bool isMultichannelGroup; // @synthesize isMultichannelGroup=_isMultichannelGroup;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool defaultCastTarget; // @synthesize defaultCastTarget=_defaultCastTarget;
@property(copy, nonatomic) NSString *leader; // @synthesize leader=_leader;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)init;

@end

