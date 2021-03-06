//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGStoryCreationAttributionModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_attributionContentURL;
    NSString *_attributionAppName;
    NSString *_attributionProfileUsername;
}

@property(readonly, copy, nonatomic) NSString *attributionProfileUsername; // @synthesize attributionProfileUsername=_attributionProfileUsername;
@property(readonly, copy, nonatomic) NSString *attributionAppName; // @synthesize attributionAppName=_attributionAppName;
@property(readonly, copy, nonatomic) NSString *attributionContentURL; // @synthesize attributionContentURL=_attributionContentURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttributionContentURL:(id)arg1 attributionAppName:(id)arg2 attributionProfileUsername:(id)arg3;

@end

