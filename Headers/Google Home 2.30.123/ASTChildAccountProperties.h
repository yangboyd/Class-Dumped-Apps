//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASTChildAccountProperties : NSObject
{
    NSString *_name;
    NSString *_gender;
    NSString *_email;
}

+ (id)childAccountPropertiesFromImpersonationParameters:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long localizationGender;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 gender:(id)arg2 email:(id)arg3;

@end

