//
// Created by khaus on 10/6/2023.
//

#include <iostream>
using namespace std;

int main()
{
    
    string inputFile = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
                       "<!DOCTYPE score-partwise PUBLIC \"-//Recordare//DTD MusicXML 4.0 Partwise//EN\" \"http://www.musicxml.org/dtds/partwise.dtd\">\n"
                       "<score-partwise version=\"4.0\">\n"
                       "  <work>\n"
                       "    <work-title>Testxml</work-title>\n"
                       "  </work>\n"
                       "  <identification>\n"
                       "    <creator type=\"composer\">Transcribed by Oemer</creator>\n"
                       "  </identification>\n"
                       "  <part-list>\n"
                       "    <score-part id=\"P1\">\n"
                       "      <part-name>Piano</part-name>\n"
                       "      <score-instrument id=\"P1-I1\">\n"
                       "        <instrument-name>Piano</instrument-name>\n"
                       "        <instrument-sound>keyboard.piano</instrument-sound>\n"
                       "      </score-instrument>\n"
                       "      <midi-instrument id=\"P1-I1\">\n"
                       "        <midi-channel>1</midi-channel>\n"
                       "        <midi-program>1</midi-program>\n"
                       "        <volume>80</volume>\n"
                       "        <pan>0</pan>\n"
                       "      </midi-instrument>\n"
                       "    </score-part>\n"
                       "  </part-list>\n"
                       "  <part id=\"P1\">\n"
                       "    <sound tempo=\"90\"/>\n"
                       "    <measure number=\"1\">\n"
                       "      <attributes>\n"
                       "        <divisions>16</divisions>\n"
                       "        <key>\n"
                       "          <fifths>0</fifths>\n"
                       "        </key>\n"
                       "        <staves>2</staves>\n"
                       "        <clef number=\"1\">\n"
                       "          <sign>G</sign>\n"
                       "          <line>2</line>\n"
                       "        </clef>\n"
                       "        <clef number=\"2\">\n"
                       "          <sign>F</sign>\n"
                       "          <line>4</line>\n"
                       "        </clef>\n"
                       "      </attributes>\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>C</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>D</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>32</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>E</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>32</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>48</duration>\n"
                       "        <dot/>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>F</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"2\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"3\">\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>F</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>E</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>32</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>D</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>32</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>48</duration>\n"
                       "        <dot/>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <pitch>\n"
                       "          <step>C</step>\n"
                       "          <alter>0</alter>\n"
                       "          <octave>4</octave>\n"
                       "        </pitch>\n"
                       "        <duration>16</duration>\n"
                       "        <type>quarter</type>\n"
                       "        <stem>up</stem>\n"
                       "        <staff>1</staff>\n"
                       "        <voice>1</voice>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"4\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"5\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"6\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"7\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"8\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"9\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"10\">\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>1</staff>\n"
                       "      </note>\n"
                       "      <backup>\n"
                       "        <duration>16</duration>\n"
                       "      </backup>\n"
                       "      <note>\n"
                       "        <rest measure=\"yes\"/>\n"
                       "        <duration>16</duration>\n"
                       "        <staff>2</staff>\n"
                       "      </note>\n"
                       "    </measure>\n"
                       "    <measure number=\"11\">\n"
                       "      <print new-system=\"yes\"/>\n"
                       "    </measure>\n"
                       "    <measure number=\"12\">\n"
                       "      <print new-system=\"yes\"/>\n"
                       "    </measure>\n"
                       "  </part>\n"
                       "</score-partwise>";



    // <instrument-name>Piano</instrument-name>
    int startIndexInstrument = (int)inputFile.find("<instrument-name>") + 17;
    int endIndexInstrument = (int)inputFile.find("</", startIndexInstrument);

    string instrument = inputFile.substr(startIndexInstrument, endIndexInstrument - startIndexInstrument);
    cout << "The instrument of this piece is: " << instrument << endl;

    int startIndexTempo = (int)inputFile.find("tempo=\"") + 7;
    int endIndexTempo = (int)inputFile.find("/>", startIndexTempo) - 1;

    string tempo = inputFile.substr(startIndexTempo, endIndexTempo - startIndexTempo);
    cout << "The tempo of this piece is: " << tempo << endl;

    return 0;
}