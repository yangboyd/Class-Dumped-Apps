//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@protocol OGLAccount;

@interface OGLAccountMenuSessionState : NSObject <NSCopying>
{
    _Bool _incognito;
    id <OGLAccount> _primaryAccount;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isIncognito) _Bool incognito; // @synthesize incognito=_incognito;
@property(retain, nonatomic) id <OGLAccount> primaryAccount; // @synthesize primaryAccount=_primaryAccount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

