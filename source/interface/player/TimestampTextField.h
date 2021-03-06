/*  
 *  TimestampTextField.h
 *  MPlayer OSX Extended
 *  
 *  Created on 01.01.2010
 *  
 *  Description:
 *	Controller for the inspector pane.
 *  
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#import <Cocoa/Cocoa.h>

enum {
	MPETimestampCurrent,
	MPETimestampRemaining,
	MPETimestampTotal,
};
typedef NSUInteger MPETimestampDisplayType;

@interface TimestampTextField : NSTextField {
	MPETimestampDisplayType displayType;
	float lastCurrentTime;
	float lastTotalTime;
	NSString *autosaveName;
}
@property (nonatomic) MPETimestampDisplayType displayType;
@property (nonatomic,readonly) NSString *autosaveName;
- (void)setTimestamptWithCurrentTime:(float)currentTime andTotalTime:(float)totalTime;
- (void)setDisplayMode:(MPETimestampDisplayType)mode;
- (void)changeDisplayMode:(id)sender;
- (void)cycleDisplayMode:(id)sender;
- (void)updateTimestamp;
@end
