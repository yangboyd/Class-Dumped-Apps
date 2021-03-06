//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, XBXGamertag;

@interface XBXSLSSocialItem : NSObject
{
    NSDate *_date;
    XBXGamertag *_gamertag;
    NSString *_xuid;
    NSString *_path;
    NSString *_rootPath;
    NSString *_parentPath;
    NSString *_rootType;
    NSString *_text;
}

+ (id)itemWithJsonNode:(id)arg1;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *rootType; // @synthesize rootType=_rootType;
@property(copy, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property(copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *xuid; // @synthesize xuid=_xuid;
@property(retain, nonatomic) XBXGamertag *gamertag; // @synthesize gamertag=_gamertag;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1 gamertag:(id)arg2 xuid:(id)arg3 path:(id)arg4 rootPath:(id)arg5 parentPath:(id)arg6 rootType:(id)arg7 text:(id)arg8;

@end

