//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBFileActionPrototype : NSObject
{
    _Bool _showByDefault;
    long long _actionId;
    long long _location;
}

+ (id)prototypeWithActionId:(long long)arg1 location:(long long)arg2 showByDefault:(_Bool)arg3;
@property(nonatomic) _Bool showByDefault; // @synthesize showByDefault=_showByDefault;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(nonatomic) long long actionId; // @synthesize actionId=_actionId;
- (id)debugDescription;

@end

