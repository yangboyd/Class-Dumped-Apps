//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPFMii, NSString;

@interface NPFOtherUser : NSObject
{
    NSString *_userId;
    NSString *_nickname;
    NSString *_nintendoAccountNickname;
    NPFMii *_nintendoAccountMii;
}

+ (void)getAsList:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NPFMii *nintendoAccountMii; // @synthesize nintendoAccountMii=_nintendoAccountMii;
@property(copy, nonatomic) NSString *nintendoAccountNickname; // @synthesize nintendoAccountNickname=_nintendoAccountNickname;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

