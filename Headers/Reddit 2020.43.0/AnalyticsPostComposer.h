//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsPostComposer : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _typeIsSet;
    _Bool _input_typeIsSet;
    _Bool _text_typeIsSet;
    _Bool _final_statusIsSet;
    _Bool _editor_modeIsSet;
    _Bool _post_scheduled;
    _Bool _post_scheduledIsSet;
    _Bool _submit_scheduled_timestampIsSet;
    NSString *_type;
    NSString *_input_type;
    NSString *_text_type;
    NSString *_final_status;
    NSString *_editor_mode;
    long long _submit_scheduled_timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool submit_scheduled_timestampIsSet; // @synthesize submit_scheduled_timestampIsSet=_submit_scheduled_timestampIsSet;
@property(nonatomic) long long submit_scheduled_timestamp; // @synthesize submit_scheduled_timestamp=_submit_scheduled_timestamp;
@property(nonatomic) _Bool post_scheduledIsSet; // @synthesize post_scheduledIsSet=_post_scheduledIsSet;
@property(nonatomic) _Bool post_scheduled; // @synthesize post_scheduled=_post_scheduled;
@property(nonatomic) _Bool editor_modeIsSet; // @synthesize editor_modeIsSet=_editor_modeIsSet;
@property(copy, nonatomic) NSString *editor_mode; // @synthesize editor_mode=_editor_mode;
@property(nonatomic) _Bool final_statusIsSet; // @synthesize final_statusIsSet=_final_statusIsSet;
@property(copy, nonatomic) NSString *final_status; // @synthesize final_status=_final_status;
@property(nonatomic) _Bool text_typeIsSet; // @synthesize text_typeIsSet=_text_typeIsSet;
@property(copy, nonatomic) NSString *text_type; // @synthesize text_type=_text_type;
@property(nonatomic) _Bool input_typeIsSet; // @synthesize input_typeIsSet=_input_typeIsSet;
@property(copy, nonatomic) NSString *input_type; // @synthesize input_type=_input_type;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetSubmit_scheduled_timestamp;
- (void)unsetPost_scheduled;
- (void)unsetEditor_mode;
- (void)unsetFinal_status;
- (void)unsetText_type;
- (void)unsetInput_type;
- (void)unsetType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 input_type:(id)arg2 text_type:(id)arg3 final_status:(id)arg4 editor_mode:(id)arg5 post_scheduled:(_Bool)arg6 submit_scheduled_timestamp:(long long)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

