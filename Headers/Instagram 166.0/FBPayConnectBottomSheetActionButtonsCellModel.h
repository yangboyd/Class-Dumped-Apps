//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayConnectBottomSheetActionButtonsCellModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_affirmativeButtonTitle;
    NSString *_negativeButtonTitle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *negativeButtonTitle; // @synthesize negativeButtonTitle=_negativeButtonTitle;
@property(readonly, copy, nonatomic) NSString *affirmativeButtonTitle; // @synthesize affirmativeButtonTitle=_affirmativeButtonTitle;
- (id)initWithAffirmativeButtonTitle:(id)arg1 negativeButtonTitle:(id)arg2;

@end

